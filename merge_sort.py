#p=start index array q=mid index r=last index             1->2->3>4->5->6->7 p=1 q=4 r=7
def merge_sort(a,p,q,r):
  if(p<r):
    q=(p+r)/2
    merge_sort(a,p,r)
    merge_sort(a,q+1,r)
    merge(a,p,q,r)
def merge(a,p,q,r):
  # Len of first array n1
  # len of second array n2
  n1=q-p+1  
  n2=r-q
  for i in range(n1+1):
    l[i]=
  i=0
  j=0
  for k in range(r+1):
    if l[i]<=r[j]:
      a[k]=l[i]
      i=i+1
    else:
      a[k]=r[j]
      j=j+1
      
