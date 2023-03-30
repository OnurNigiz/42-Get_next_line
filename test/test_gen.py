fd = open("../test.txt", "w")
for i in range(1000):
	fd.write(f"Line number : {i}\n")
fd.close()