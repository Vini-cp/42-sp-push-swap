import os

for i in range(100):
	title = f'echo -n "{i + 1} numbers : " >> resp'
	cmd_checker = f"ARG=`ruby -e \"puts (0..{i}).to_a.shuffle.join(' ')\"`; ./push_swap $ARG | ./checker_linux $ARG >> resp"
	lines = f'echo -n "Lines: " >> resp'
	cmd_counter = f"ARG=`ruby -e \"puts (0..{i}).to_a.shuffle.join(' ')\"`; ./push_swap $ARG | wc -l >> resp"
	os.system(title)
	os.system(cmd_checker)
	os.system(lines)
	os.system(cmd_counter)
	os.system("echo >> resp")


for i in range(199, 599, 100):
	title = f'echo -n "{i + 1} numbers : " >> resp'
	cmd_checker = f"ARG=`ruby -e \"puts (0..{i}).to_a.shuffle.join(' ')\"`; ./push_swap $ARG | ./checker_linux $ARG >> resp"
	lines = f'echo -n "Lines: " >> resp'
	cmd_counter = f"ARG=`ruby -e \"puts (0..{i}).to_a.shuffle.join(' ')\"`; ./push_swap $ARG | wc -l >> resp"
	os.system(title)
	os.system(cmd_checker)
	os.system(lines)
	os.system(cmd_counter)
	os.system("echo >> resp")
