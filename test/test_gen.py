fd = open("../test.txt", "w")
for i in range(300):
	fd.write(f"Line number: {i +1} \n")
fd.close()
