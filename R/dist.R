
# for a question paper with 10 MCQ each having 4 options find probabiblity for which student gets exactly 5 correct 

dbinom(x= 4 , size = 10 , prob = 0.25 )

#finding the probability for 3 or more answer correct
1 - pbinom(3 , size= 10 , prob = 0.25)



# problem  statement: In an Exam if avg time taken to solve one question is 2 minutes
# now for 3 anser to be solved in particluar time
avg = 2 
lambda = avg 

rpois(3 , lambda = lambda)


#A life insurance salesman sells on the average 3 life insurance policies per week. 
 #Use Poisson's law to calculate the probability that in a given week he will sell

# a :- some policys

# some policy means 1 or more

hist(dpois(1:10 , lambda =  3))

plot(dpois(0:10 , lambda = 3))


plot( 0:50, dbinom(0:50, size = 50 ,prob = 0.5)) 

plot( 50,rbinom(n, size = 5 ,prob = 0.5)) 

plot(rpois(1000, lambda = 1)) 

