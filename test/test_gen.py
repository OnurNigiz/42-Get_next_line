fd = open("../test1.txt", "w")
for i in range(300):
	fd.write(f"Line number : {i}\n")
fd.close()
