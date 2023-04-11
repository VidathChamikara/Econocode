# Econocode
Problem and answer

When the price of powdered milk was 200 rupees, the number of packets sold was 500000. But due to the increase of 20 rupees the number of packets sold was 425,000. Find the price elasticity of demand and check the total revenue is increased or decreased ?

            (p1=Rs.200 ->   q1=500000)

            (p2=Rs.220 ->   q2=425000)

                     PED = %Change in quantity demanded / %Change in price
                     PED = (q1-q2)*p1 / (p1-p2)*q1
                     PED = (75000)*200 / 20*500000
                     PED = 1.5

                    Initial Total Revenue = Rs.200 * 500,000 = Rs.100,000,000 = R1
                    After Total Revenue = Rs.220 * 425,000 = Rs.93,500,000 =R2
                    R1>R2
                    So Total Revenue has decreased.

While the price of powdered milk was 200 rupees, the price of fresh cow's milk was reduced from 220 to 180 rupees. As a result, the number of packets of flour was reduced from 500,000 to 450,000. Find the cross elasticity of demand and those two products are substitutes or complementary ?

                  XED = %Change the quantity demanded of powdered / %Change the price of fresh                            milk
                 XED = (50,000 * 220) / (500,000 * 40)
                 XED = 0.55
                 XED is a positive value. So both products are substitutes.

Revenue increased from Rs. 20,000 to Rs. 5,000, reducing the number of packets sold from 500,000 to 475,000. Find the income elasticity of demand and this product normal or inferior?

                YED = %Change in demand / %Change in income
                YED = (25000*20000) / (500000*5000)
                YED = -0.2
                YED is a negative value. So this product is inferior.



Pseudocode

START program
DO WHILE (res = ‘y’)
Print  “Enter the option type(A or B or C)”;
Input type;
CASE OF type
                  ’A’    :       Print ”Enter the pre-change price of the product”;
                                  Input p1;
                                  Print ”Enter the post-change price of the product”;
                                  Input p2;
                                  Print ”Enter the quantity demand of the pre-change price of product”;
                                  Input q1;
                                  Print ”Enter the quantity demand of the post-change price of product”;
                                  Input q2;
                                  FUNCTION ped( p1,p2,q1,q2)
                                             ans =  ((q1-q2)*p1)/((p1-p2)*q1);
                                             RETURN ans;
                                  ENDFUNCTION ped
                                  Set result = ans;
                                  Print (“PED =“ , result);  
                                  IF (result < 1) THEN 
                                                    IF (p2>p1)
                                                                 THEN  Print “Total revenue is increased”;
                                                    ELSE
                                                                             Print “Total revenue is decreased”;
                                                    END IF;
                                 END IF;

                                 ELSE  
                                                    IF (p2>p1)
                                                                            Print “Total revenue is decreased”;
                                                    ELSE 
                                                                            Print “Total revenue is increased”;
                                                    END IF;

                   ’B’    :       Print ”Enter the pre-change price of the another product”;
                                   Input pp1;
                                   Print ”Enter the post-change price of the another product”
                                   Input pp2;
                                   Print ”Enter the quantity demand of product at the pre-change price of another product”;

                                   Input qq1;
                                   Print ”Enter the quantity demand of product at the post-change price of another product”;
                                    Input qq2;
                                    FUNCTION xed( ppp1,ppp2,qqq1,qqq2)
                                             anss = ((qq1-qq2)*pp1)/((pp1-pp2)*qq1);
                                             RETURN anss;
                                    ENDFUNCTION xed
                                    Print(“XED = “, anss); 
                                    IF (anss > 0)
                                                   THEN Print “Both of these products are Substitutes goods”; 
                                   ELSE
                                                   Print “This product is Inferior good”;   
                                   END IF        
                                           
                   ’C’      :     Print ”Enter the pre-change income”;
                                   Input ppp1;
                                   Print ”Enter the post-change income”;
                                   Input pp2;
                                   Print ”Enter the quantity demand of product at the pre-change income”;
                                   Input qq1; 
                                   Print ”Enter the quantity demand of product at the post-change income”;
                                   Input qqq2;
                                    FUNCTION yed( pp1,pp2,qq1,qq2)
                                             ansss = ((qqq1-qqq2)*ppp1)/((ppp1-ppp2)*qqq1);
                                             RETURN ansss;
                                    ENDFUNCTION yed
                                   print(“PED =” , ansss); 
                                   IF anss > 0:
                                                   THEN Print “Both of these products are Normal good”; 
                                   ELSE
                                                   Print “This product is Inferior good”;   
                                  END IF     
ENDCASE;   
Print ”Do you want to go another option(y or n)”;
Input res;
ENDDOWHILE;
END program
