# RSA-Encryption-decryption-
                                    RSA Encryption & decryption 
RSA (Rivest–Shamir–Adleman) is one of the first public-key cryptosystems and is widely used for secure data transmission. In such a cryptosystem. The Required algorithm for Encrypting a message using RSA Cryptography is described below:
Encryption :
The given key (N,e)
So by encrypting each letter of a certain string as 
(base position of the letter)^e mod N 
The decrypting letter can be made.
Decryption :
There is also the decryption key given (N,d)
 So by decrypting each letter of a certain string as 
	 (base position of the letter)^d mod N
Thus the main text can be found back.
For the key generation the pross is given below:
1.	Let assume 2 prime numbers p,q.
2.	N=p*q
3.	Q(N)=(p-1)(q-1)= number of co-primes
4.	For choosing ‘e’ there are two condition 1<e<Q(N) & e is co-prime with N,Q(N).
5.	For Choosing d
    de mod Q(N)=1 or inverse of (e mod Q(N))  
