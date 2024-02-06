#Getting inputs
word = input("Enter a word:\n")
shift_value = int(input("Enter the shift value:\n"))

#Converting to lowercase
word = word.lower()

#Initializing the cipher variable
cipher = ""

#Shifting each letter and adding to cipher
for letter in word:
    shifted_letter = chr((ord(letter) + shift_value ) % 26 )
    cipher += shifted_letter

#Printing the final cipher
print("The shifted word is:", cipher)