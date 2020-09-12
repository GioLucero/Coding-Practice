# Given a string, find the length of the longest substring without repeating characters.
# Ex. Input: "abcabcbb"
# Output: 3 
# Explanation: The answer is "abc", with the length of 3. 

# Python program to find the length of the longest substring 
# without repeating characters

# step1: we want to iterate through the array to different sets of substrings
	# we can use a dictionary
# step2: compare sets of substrings 
	#if indices contain different values, add 1 to the max_length
# step3: print longest set of substring 

def longest_substring(self, s: str) -> int: 
	 if len(s) == 0:
            return 0
            #initialize dictionary
        map = {} 
        max_length = start = 0 #initialize max_length of substring
        
        for i in range(len(s)): #for loop to iterate through the dictionary
            if s[i] in map and start <= map[s[i]]: 
                start = map[s[i]] + 1
                
            else:
                max_length = max(max_length, i - start + 1)
            map[s[i]] = i
        return(max_length)

