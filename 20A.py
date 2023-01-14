inp = input();
s   = inp.split("/");

fin = "";
for a in s:
	if a == "":
		continue;

	fin += f"{a}/"

if inp[0] == "/":
	fin = f"/{fin}"
	
if inp[len(inp)-1] != "/":
	fin = fin[:-1]

print(fin)
