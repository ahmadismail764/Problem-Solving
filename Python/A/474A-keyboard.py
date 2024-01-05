keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./"

direction = input()
sequence = input()

for c in sequence:
    index = keyboard.find(c)
    right, left = (index + 1) % len(keyboard), (index - 1) % len(keyboard)
    print(keyboard[right] if direction == 'L' else keyboard[left], end='')
