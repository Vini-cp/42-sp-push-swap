import os

def personal_checker(init: int, end: int, step: int):
	for i in range(init, end, step):
		title = f'echo -n "{i + 1} numbers : " >> resp'
		cmd_checker = f"ARG=`ruby -e \"puts (0..{i}).to_a.shuffle.join(' ')\"`; ./push_swap $ARG | ./checker_linux $ARG >> resp"
		lines = 'echo -n "Lines: " >> resp'
		cmd_counter = f"ARG=`ruby -e \"puts (0..{i}).to_a.shuffle.join(' ')\"`; ./push_swap $ARG | wc -l >> resp"
		leak = 'echo -n "Leak: " >> resp'
		cmd_leak = f"ARG=`ruby -e \"puts (0..{i}).to_a.shuffle.join(' ')\"`; valgrind --leak-check=full 2>&1 ./push_swap $ARG | awk 'c&&!--c;/HEAP SUMMARY/{{c=4}}' >> resp"
		os.system(title)
		os.system(cmd_checker)
		os.system(lines)
		os.system(cmd_counter)
		os.system(leak)
		os.system(cmd_leak)
		os.system("echo >> resp")


if __name__ == '__main__':
	os.system("rm resp")
	personal_checker(0, 15, 1)
	personal_checker(15, 100, 5)
	personal_checker(99, 599, 100)
