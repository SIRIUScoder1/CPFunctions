// cuberoot function

  long long int cubeRoot(long long int num)
  {
      long long int lower = 0,high = 1000001;
      while(lower != high)
      {
          long long int mid = (lower + high)/2;
          if(mid*mid*mid == num)  return mid;
          else if(mid*mid*mid > num)  high = mid-1;
          else  lower = mid+1;
      }
      return -1;
  }
