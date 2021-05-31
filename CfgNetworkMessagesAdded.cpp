
//drop this in the root mission file and add this to description.ext inside CfgNetworkMessages (#include "CfgNetworkMessagesAdded.cpp")

class updateStatsRequest 
{
        module = "object_player";
        parameters[] = 
    {
        "STRING",
        "STRING",       
        "SCALAR",
        "SCALAR"
    };
};
class createPlayerResponse
{
        module = "object_player";
        parameters[] = 
    {
        "OBJECT",
        "STRING",
        "STRING",
        "STRING",            
        "SCALAR",
        "SCALAR",
        "SCALAR",
        "SCALAR",
        "SCALAR",
        "SCALAR", 
        "ARRAY",
        "SCALAR"
    }; 
};
class loadPlayerResponse
{
    module = "object_player";
    parameters[] = 
    {
        "STRING",
        "STRING",
        "STRING",        
        "SCALAR",
        "SCALAR",
        "SCALAR",
        "SCALAR",
        "SCALAR",
        "ARRAY",
        "SCALAR",
        "SCALAR"
    };
};