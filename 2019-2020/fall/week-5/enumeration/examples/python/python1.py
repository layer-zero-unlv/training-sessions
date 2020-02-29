"""
Python Example 1
"""


def checkPassword(password):
    if len(password) < 8:
        return False

    if sum([ord(x) for x in password]) != 960:
        return False

    if ord(password[5]) != 91 or sum([ord(x) for x in password[:3]]) != 260:
        return False

    return True


if __name__ == '__main__':
    userInput = input("What's the password?: ")
    if checkPassword(userInput):
        print('Yup')
    else:
        print('Nope. Try again')
