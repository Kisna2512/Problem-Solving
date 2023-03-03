class Solution {
public:
bool isIPv4(string input)
{
    int blocks=0;
    int blocklength=0;
    string temp="";
    int n=input.size();
    for(int i=0;i<input.size();i++)
    {
        if(!(input[i] >= 48 && input[i] <= 57) && input[i]!='.')
        {
            return false;
        }

        if(input[i]!='.')
        {
            temp+=input[i];
            blocklength++;
        }

        if(input[i]=='.' || i==n-1)
        {
            if(i==n-1)
            {
                if(input[i]=='.')
                {
                    return false;
                }
            }
           blocks++;
            if(temp[0]=='0' && blocklength > 1)
            {
                return false;
            }

            if(!(blocklength <= 3 && blocklength >= 1))
            {
                return false;
            }

            if(stoi(temp) > 255) return false;
            temp="";
            blocklength=0;

        }
    }

        if(temp.size()!=0)
        {
            blocks++;
        }
        if(!(blocks==4))
        {
            return false;
        }
       return true;

}

   bool isIPv6(string input)
   {
        int blocks=0;
    int blocklength=0;
    string temp="";
    int n=input.size();
    for(int i=0;i<input.size();i++)
    {
        if(!(input[i] >= 48 && input[i] <= 57) && input[i]!=':' && !(input[i] >= 65 && input[i] <= 70 ) && !(input[i] >= 97 && input[i] <= 102))
        {
            return false;
        }

        if(input[i]!=':')
        {
            temp+=input[i];
            blocklength++;
        }

        if(input[i]==':' || i==n-1)
        {
            if(i==n-1)
            {
                if(input[i]==':')
                {
                    return false;
                }
            }
            blocks++;
            if(!(blocklength <= 4 && blocklength >= 1))
            {
                return false;
            }
            temp="";
            blocklength=0;
        }
    }
        if(temp.size()!=0)
        {
           blocks++;
        }
        if(!(blocks==8))
        {
            return false;
        }
       return true;
   }

    string validIPAddress(string queryIP) {
        if(isIPv4(queryIP)) return "IPv4";
        if(isIPv6(queryIP)) return "IPv6";
        return "Neither";
    }
};
