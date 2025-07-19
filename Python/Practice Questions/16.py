# Given a list of integers, print all elements at even indexes in reverse order.
# nums = [10, 20, 30, 40, 50, 60]
# Output: 50 30 10
nums = [10, 20, 30, 40, 50, 60]

even_index_elements = nums[::2]         # Step 1
reversed_even = even_index_elements[::-1]  # Step 2

for num in reversed_even:               # Step 3
    print(num, end=' ')
