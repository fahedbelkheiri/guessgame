import random

def main():
    
    target = random.randint(1, 100)
    attempts = 0

    print("Welcome to the Number Guessing Game!")
    print("I have selected a number between 1 and 100.")
    print("Can you guess what it is?")

    
    while True:
        try:
            guess = int(input("Enter your guess: "))
            attempts += 1  

            if guess < target:
                print("Too low! Try again.")
            elif guess > target:
                print("Too high! Try again.")
            else:
                print(f"Congratulations! You guessed the number {target} in {attempts} attempts.")
                break
        except ValueError:
            print("Please enter a valid integer.")

if __name__ == "__main__":
    main()
