# Introduction to dictionaries

d = {}
# d = {"George": 24, "Tom": 32}

d["George"] = 24
d["Tom"] = 32
d["Jenny"] = 16

print(d["Tom"])

# to change the value of a key in the dictionary, you can simply call and change it at any time
d["Jenny"] = 18

print(d["Jenny"])

# Keys are commonly srrings or numbers 
d[10] = 100
print(d[10])

# how to iterate over key-value pairs?
for key, value in d.items():
    print("Key:")
    print(key)
    print("Value:")
    print(value)
    print("")