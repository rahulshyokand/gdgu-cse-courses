##########################################
LETTERS
vec <- LETTERS[1:5]
vec
# now using a for loop to iterate data
for (iter in vec ){
     print(iter)
}
###########################################
asdf <- c("Rahul","Shyokand")
counter <- 2
#now using while loop to iterate
while (counter < 6) {
  print(asdf)
  counter = counter + 1
}
###########################################
yo_name <- c("YOLO" , "Yo")
counter <- 2 
repeat{
  print(yo_name)
  counter <- counter + 1
  if(counter > 5 ){
    break
  }
}

#########################################################
#Write a R program to print the numbers from 1 to 100 and
#print "TWO" For multiples of 2, "THREE" for multiples 
# of 3 and "SIX" for multiples of both 2 and 3.

# Assigning 1 to 100 to a variable
num <- 1:100
# accessing each element using loop
for (iter in num ){
  #checking division by 2 ,3 and 6
  if(num[iter] %% 2 == 0)
    status[iter] <- "TWO"
  else if (num[iter] %% 3 == 0 )
    status[iter] <- "THREE"
  else if(num[iter] %% 6 == 0 )
#assigning string to status vector
    status[iter] <- "SIX"
  else 
    status[iter] <- "Prime"
}
# making a data frame 
data <- data.frame(num , status)
#showing data
data


########################################################
#Write a function in r to check if number is Even or Odd
#function to find odd_or_even passing a number in function
odd_or_even <- function(num){
  if(num %% 2 == 0)
  output <-paste( num , "is Even")
  else
  output  <- paste(num , "is Odd")
  return(output)
}
odd_or_even(50)



####################################################
#Write a function in R 
# to check if entered number is Palindrome or Not

#making a Element Reverse function 
reverse_element <- function(x){
  reverse = 0
  while(x > 1 ){
   lastDigit <- floor(x %% 10)
    reverse = (reverse * 10) + lastDigit
    
    x <- x / 10 
  }
  return(reverse)
}
reverse_element(245633)

palindrome_or_not <- function(num){
  #calling reverse function 
  if(num  == reverse_element(num))
    output <-paste( num , "is Palindrome")
  else
    output  <- paste(num , "is not Palindrome")
  return(output)
}
palindrome_or_not(22)
palindrome_or_not(45)


















