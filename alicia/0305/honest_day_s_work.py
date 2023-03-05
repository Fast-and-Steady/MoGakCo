P = int(input( ))
B = int(input( ))
D = int(input( ))

num_caps = P // B
result = num_caps * D
P = P - num_caps * B
result = result + P

print(result)