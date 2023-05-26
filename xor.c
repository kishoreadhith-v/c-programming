// The following are many other interesting problems using XOR operator.
// Find the Missing Number
// swap two numbers without using a temporary variable
// A Memory Efficient Doubly Linked List
// Find the two non-repeating elements.
// Find the two numbers with odd occurences in an unsorted-array.
// Add two numbers without using arithmetic operators.
// Swap bits in a given number.
// Count number of bits to be flipped to convert a to b .
// Find the element that appears once.
// Detect if two integers have opposite signs.

// Path: xor.c
// Find the Missing Number
// Given an array of n-1n−1 integers in the range from 11 to nn, find the missing number in it. There are no duplicates in the array.
// Example:
// Input: arr[] = {1, 5, 2, 6, 4}
// Output: 3
// Input: arr[] = {1, 2, 3, 5}
// Output: 4
// Approach: The length of the array is n-1n−1. So the sum of all n elements, i.e sum of numbers from 1 to nn can be calculated using the formula n*(n+1)/2n∗(n+1)/2. Now find the sum of all the elements in the array and subtract it from the sum of first nn numbers, it will be the value of the missing element.
// Algorithm:
// Calculate the sum of first nn natural numbers as sumtotal= n*(n+1)/2sumtotal= n∗(n+1)/2
// Create a variable sum to store the sum of array elements.
// Traverse the array from start to end.
// Update the value of sum as sum = sum + array[i]
// Print the missing number as sumtotal – sum
// Implementation:
