var0=$(echo "1+1" | .././calc 0123456789 "()+-*/%" 3 ; echo)
var1=$(echo "1-1" | .././calc 0123456789 "()+-*/%" 3 ; echo)
var2=$(echo "1*1" | .././calc 0123456789 "()+-*/%" 3 ; echo)
var3=$(echo "1/1" | .././calc 0123456789 "()+-*/%" 3 ; echo)
var4=$(echo "1%1" | .././calc 0123456789 "()+-*/%" 3 ; echo)
var5=$(echo "-5+6" | .././calc 0123456789 "()+-*/%" 4 ; echo)
var6=$(echo "56%4" | .././calc 0123456789 "()+-*/%" 4 ; echo)
var7=$(echo "50%40" | .././calc 0123456789 "()+-*/%" 5 ; echo)
var8=$(echo "120000+120000" | .././calc 0123456789 "()+-*/%" 13 ; echo)
var9=$(echo "123456789-123456789" | .././calc 0123456789 "()+-*/%" 19 ; echo)
var10=$(echo "100*100" | .././calc 0123456789 "()+-*/%" 7 ; echo)
var11=$(echo "A+B" | .././calc 0123456789 "()+-*/%" 3 ; echo)
s1="Syntax error"

echo -e "███████████████\e[1mTEST N°1\e[0m███████████████"
echo
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m" 
echo -e "1 + 1 = \e[1m\e[31m2\e[0m"
echo
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"

if (($var0 == 2))

then
  echo -e "1 + 1 = \e[32m$var0\e[0m"
fi

if (($var0 != 2))

then
  echo -e "1 + 1 = \e[31m$var0\e[0m"
  echo
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"
fi

echo

echo -e "███████████████\e[1mTEST N°2\e[0m███████████████"
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "1 - 1 = \e[1m\e[31m0\e[0m"                                                                                                                                                                               
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"

if (($var1 == 0))

then
  echo -e "1 - 1 = \e[32m$var1\e[0m"
fi

if (($var1 != 0))

then
  echo -e "1 - 1 = \e[32m$var1\e[0m"
  echo
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"
fi

echo

echo -e "███████████████\e[1mTEST N°3\e[0m███████████████"                                                                                                                                                        
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "1 * 1 = \e[1m\e[31m1\e[0m"                                                                                                                                                                               
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"

if (($var2 == 1))

then
  echo -e "1 * 1 = \e[32m$var2\e[0m"
fi

if (($var2 != 1))

then
  echo -e "1 * 1 = \e[31m$var2\e[0m"
  echo
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"
fi

echo

echo -e "███████████████\e[1mTEST N°4\e[0m███████████████"
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "1 / 1 = \e[1m\e[31m1\e[0m"                                                                                                                                                                               
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"

if (($var3 == 1))

then
  echo -e "1 / 1 = \e[32m$var3\e[0m"
fi

if (($var3 != 1))

then
  echo -e "1 / 1 = \e[32m$var3\e[0m"
  echo
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"
fi

echo

echo -e "███████████████\e[1mTEST N°5\e[0m███████████████"                                                                                                                                                        
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "1 % 1 = \e[1m\e[31m0\e[0m"                                                                                                                                                                               
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"

if (($var4 == 0))

then
  echo -e "1 % 1 = \e[32m$var4\e[0m"
fi

if (($var4 != 0))

then
  echo -e "1 % 1 = \e[32m$var4\e[0m"
  echo
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"
fi

echo

echo -e "███████████████\e[1mTEST N°6\e[0m███████████████"                                                                                                                                                        
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "-5 + 6 = \e[1m\e[31m1\e[0m"                                                                                                                                                                              
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"                                                                                                                                                                           
                                                                                                                                                                                                                  
if (($var5 == 1))                                                                                                                                                                                                 
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "-5 + 6 = \e[32m$var5\e[0m"                                                                                                                                                                             
fi                                                                                                                                                                                                                
                                                                                                                                                                                                                  
if (($var5 != 1))                                                                                                                                                                                                 
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "-5 + 6 = \e[32m$var5\e[0m"                                                                                                                                                                             
  echo                                                                                                                                                                                                            
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"                                                                                                                                                                            
fi

echo

echo -e "███████████████\e[1mTEST N°7\e[0m███████████████"                                                                                                                                                        
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "56 % 4 = \e[1m\e[31m0\e[0m"                                                                                                                                                                              
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"                                                                                                                                                                           
                                                                                                                                                                                                                  
if (($var6 == 0))                                                                                                                                                                                                 
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "56 % 4 = \e[32m$var6\e[0m"                                                                                                                                                                             
fi                                                                                                                                                                                                                
                                                                                                                                                                                                                  
if (($var6 != 0))                                                                                                                                                                                                 
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "56 % 4 = \e[32m$var6\e[0m"                                                                                                                                                                             
  echo                                                                                                                                                                                                            
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"                                                                                                                                                                            
fi

echo

echo -e "███████████████\e[1mTEST N°8\e[0m███████████████"                                                                                                                                                        
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "50 % 40 = \e[1m\e[31m10\e[0m"                                                                                                                                                                            
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"                                                                                                                                                                           
                                                                                                                                                                                                                  
if (($var7 == 10))                                                                                                                                                                                                
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "50 % 40 = \e[32m$var7\e[0m"                                                                                                                                                                           
fi                                                                                                                                                                                                                
                                                                                                                                                                                                                  
if (($var7 != 10))                                                                                                                                                                                                
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "50 % 40 = \e[32m$var7\e[0m"                                                                                                                                                                            
  echo                                                                                                                                                                                                            
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"                                                                                                                                                                            
fi
 
echo

echo -e "███████████████\e[1mTEST N°9\e[0m███████████████"                                                                                                                                                       
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "120000 + 120000 = \e[1m\e[31m240000\e[0m"                                                                                                                                                                
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"                                                                                                                                                                           
                                                                                                                                                                                                                  
if (($var8 == 240000))                                                                                                                                                                                           
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "120000 + 120000 = \e[32m$var8\e[0m"                                                                                                                                                                   
fi                                                                                                                                                                                                                
                                                                                                                                                                                                                  
if (($var8 != 240000))                                                                                                                                                                                           
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "120000 + 120000 = \e[32m$var8\e[0m"                                                                                                                                                                   
  echo                                                                                                                                                                                                            
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"                                                                                                                                                                            
fi

echo

echo -e "███████████████\e[1mTEST N°10\e[0m███████████████"                                                                                                                                                       
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "123456789 - 123456789 = \e[1m\e[31m0\e[0m"                                                                                                                                                               
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"                                                                                                                                                                           
                                                                                                                                                                                                                  
if (($var9 == 0))                                                                                                                                                                                                
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "123456789 - 123456789 = \e[32m$var9\e[0m"                                                                                                                                                             
fi                                                                                                                                                                                                                
                                                                                                                                                                                                                  
if (($var9 != 0))                                                                                                                                                                                                
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "123456789 - 123456789 = \e[32m$var9\e[0m"                                                                                                                                                             
  echo                                                                                                                                                                                                            
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"                                                                                                                                                                            
fi

echo

echo -e "███████████████\e[1mTEST N°11\e[0m███████████████"                                                                                                                                                       
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "100 * 100 = \e[1m\e[31m10000\e[0m"                                                                                                                                                                       
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"                                                                                                                                                                           
                                                                                                                                                                                                                  
if (($var10 == 10000))                                                                                                                                                                                            
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "100 * 100 = \e[32m$var10\e[0m"                                                                                                                                                                         
fi                                                                                                                                                                                                                
                                                                                                                                                                                                                  
if (($var10 != 10000))                                                                                                                                                                                            
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "100 * 100 = \e[32m$var10\e[0m"                                                                                                                                                                         
  echo                                                                                                                                                                                                            
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"                                                                                                                                                                            
fi  

echo

echo -e "███████████████\e[1mTEST N°12\e[0m███████████████"                                                                                                                                                       
echo                                                                                                                                                                                                              
echo -e "\e[7m\e[1m\e[31mExpect :\e[0m"                                                                                                                                                                           
echo -e "A + B = \e[1m\e[31mSyntax error\e[0m"                                                                                                                                                                    
echo                                                                                                                                                                                                              
echo -e "\e[1m\e[7m\e[32mResult :\e[0m"                                                                                                                                                                           
                                                                                                                                                                                                                  
if [ "$var1"1 == "$s1" ]                                                                                                                                                                                     
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "A + B = \e[31mSyntax error\e[0m"                                                                                                                                                                      
fi                                                                                                                                                                                                                
                                                                                                                                                                                                                  
if [ "$var11" != "$s1" ]                                                                                                                                                                                     
                                                                                                                                                                                                                  
then                                                                                                                                                                                                              
  echo -e "A + B = \e[31mSyntax error\e[0m"                                                                                                                                                                             
  echo                                                                                                                                                                                                            
  echo -e "\e[91m\e[5mBAD RESULT\e[0m"                                                                                                                                                                            
fi  

