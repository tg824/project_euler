#My First ruby program ever
#this stuff is strangely confusing

class Euler
    #problem 3, find the highest prime factor of 600851475143
    def highest_prime_factor(n)
        factors = Array.new
        number = n
        i = 2 
        while i <= n
            while n%i == 0
                factors << i
                n = n/i
            end
            i=i+1
        end
        factors
    end

    #checks to see if a number is a palindrome
    def is_palindrome(n)
        n == n.to_s().reverse().to_i()
    end
    #problem 4, find the largest palindrome that can be made from the product
    #of two three-digit numbers
    def highest_three_digit_palindrome
        operand1 = 100
        operand2 = 100
        max = 0
        
        while operand1 < 1000
            while operand2 < 1000
                product = operand1 * operand2
                if is_palindrome(product)
                    if product > max
                        max = product
                        factors = [max, operand1, operand2]
                    end
                end
            operand2 += 1
            end
        operand2 = 100
        operand1 += 1
        end
        factors
    end
end



object = Euler.new
puts object.highest_prime_factor(600851475143)
puts object.is_palindrome(9009)
puts object.highest_three_digit_palindrome()

