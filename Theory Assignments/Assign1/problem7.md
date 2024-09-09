# Description

Take input number
loop While count != 0
count = 7
Inside loop 
number MOD 10
If answer zero then counts corrosponding panel will light 
If anwer not zero then counts corrosponding panel will not light
divider number by 10 
decrement count by one
Outside loop
After checking all the panels print the appropriate number

# Pseudocode

Declare count, num As Int
Declare lightPanelA, lightPanelB, lightPanelC, 
lightPanelD, lightPanelE, lightPanelF, lightPanelG As Boolean
lightPanelA, lightPanelB, lightPanelC = False 
lightPanelD, lightPanelE, lightPanelF, lightPanelG = False
Input num
count = 7


If num == 1111110 {
  Print 0
}
Elseif num == 1111111 {
  Print 8
}
Elseif num == 0110000 {
  Print 1
}
Elseif num == 1101101 {
  Print 2
}
Elseif num == 1111001 {
  Print 3
}
Elseif num == 0110011 {
  Print 4
}
Elseif num == 1011011 {
  Print 5
}
Elseif num == 1011111 {
  Print 6
}
Elseif num == 1110000 {
  Print 7
}








While count != 0 {
  modValue = num % 10
  If count == 1 {
    If modValue == 0 {
      lightPanelA = True
    }
  }
  Elseif count == 2 {
    If modValue == 0 {
      lightPanelB = True
    }
  }
   Elseif count == 3 {
     If modValue == 0 {
      lightPanelC = True
    }
  }
   Elseif count == 4 {
     If modValue == 0 {
      lightPanelD = True
    }
  }
   Elseif count == 5 {
     If modValue == 0 {
      lightPanelE = True
    }
  }
   Elseif count == 6 {
     If modValue == 0 {
      lightPanelF = True
    }
  }
   Elseif count == 7 {
     If modValue == 0 {
      lightPanelG = True
    }
  }
  num = num / 10
  count = count - 1
}

If panelA == True {
 If panelB == True {
   If panleC == True {
     If panelD == True {
       If panelE == True {
         If panelF == True {
           If panelG == True {
             printNum = 8
           }
           Else {
             printNum = 0
           }
         }
         Else {
           printnum = 
         }
       }
     }
   }
 } 
 Else {
   p
 }
}
Elseif panelB == True {

}
Elseif panelC == True {

}
Elseif panelD == True {

}
Elseif panelE == True {

}
Elseif panelF == True {

}
Elseif panelG == True {

}






