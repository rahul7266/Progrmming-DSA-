def invert_dictionary(d):
    inverted = {}
    for key, value in d.items():
        if value not in inverted:
            inverted[value] = [key]
        else:
            inverted[value].append(key)
    return inverted

print(invert_dictionary({"a": 7, "b": 8}))  # {7: ['a'], 8: ['b']}
print(invert_dictionary({"a": 2, "b": 2}))  # {2: ['a', 'b']}
print(invert_dictionary({}))  # {}
