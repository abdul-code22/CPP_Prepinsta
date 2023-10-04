def linear_search(arr, key):
    for i, element in enumerate(arr):
        if key == element:
            return i  # Element found, return its index.

    return -1  # Element not found, return -1.

# Main program
if __name__ == "__main__":
    arr = [23, 34, 78, 11, 12, 13]
    key = int(input("Enter the element to search: "))
    result = linear_search(arr, key)

    if result != -1:
        print(f"Element {key} found at index {result}.")
    else:
        print(f"Element {key} not found in the list.")
