    return true;
}


// Main function

int main()
{
  int A[] = {1, 3, 2, 5, 4};
  int B[] = {2, 4, 5, 1, 3};
    int lenA = sizeof(A) / sizeof(int);
    int lenB = sizeof(B) / sizeof(int);

  if (isArrEqual(A, B, lenA, lenB))
  {
      cout<<"Arrays are equal";
  }
  else
  {
    cout<<"Arrays are not equal";
  }

  return 0;}
