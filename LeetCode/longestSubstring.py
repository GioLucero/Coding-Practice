# Given a string, find the length of the longest substring without repeating characters.
# Ex. Input: "abcabcbb"
# Output: 3 
# Explanation: The answer is "abc", with the length of 3. 

# Python program to find the length of the longest substring 
# without repeating characters 
NO_OF_CHARS = 256

def longestUniqueSubsttr(string): 
	n = len(string) 
	cur_len = 1	 # To store the length of current substring 
	max_len = 1	 # To store the result 
	prev_index = 0 # To store the previous index 
	i = 0

	# Initialize the visited array as -1, -1 is used to indicate 
	# that character has not been visited yet. 
	visited = [-1] * NO_OF_CHARS 

	# Mark first character as visited by storing the index of 
	# first character in visited array. 
	visited[ord(string[0])] = 0

	# Start from the second character. First character is already 
	# processed (cur_len and max_len are initialized as 1, and 
	# visited[str[0]] is set 
	for i in xrange(1, n): 
		prev_index = visited[ord(string[i])] 

		# If the currentt character is not present in the already 
		# processed substring or it is not part of the current NRCS, 
		# then do cur_len++ 
		if prev_index == -1 or (i - cur_len > prev_index): 
			cur_len+= 1

		# If the current character is present in currently considered 
		# NRCS, then update NRCS to start from the next character of 
		# previous instance. 
		else: 
			# Also, when we are changing the NRCS, we should also 
			# check whether length of the previous NRCS was greater 
			# than max_len or not. 
			if cur_len > max_len: 
				max_len = cur_len 

			cur_len = i - prev_index 

		# update the index of current character 
		visited[ord(string[i])] = i 

	# Compare the length of last NRCS with max_len and update 
	# max_len if needed 
	if cur_len > max_len: 
		max_len = cur_len 

	return max_len 

# Driver program to test the above function 
string = "ABDEFGABEF"
print ("The input string is ") + string 
length = longestUniqueSubsttr(string) 
print ("The length of the longest non-repeating character" +
	" substring is " + str(length)) 

# This code is contributed by Bhavya Jain 
