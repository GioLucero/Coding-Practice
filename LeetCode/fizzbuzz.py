# fizzbuzz question:
# for this question, we will be using a for loop and if and else statements
#an elif statment allows you to check multiple expressions for true and execute a block of code as soon as one of the conditions evaluates to True 
for num in range(1, 100):
    # if the number is a multiple of 3 AND 5 - if true, print fizzbuzz
  if num % 3 == 0 and num % 5 == 0:
      print('Fizzbuzz')
    # if the number is just a multiple of 3, print fizz
  elif num % 3 == 0:
      print('fizz')
    # if the number is just a multiple of 5, print buzz
  elif num % 5 == 0:
      print('buzz')
  else:
    # if it is neither a multiple of 3 or 5, simply print out the number as is 
      print(str(num))