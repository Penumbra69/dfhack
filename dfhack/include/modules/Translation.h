#ifndef CL_MOD_POSITION
#define CL_MOD_POSITION
/*
* Translation of names
*/
#include "Export.h"
namespace DFHack
{
    struct APIPrivate;
    typedef std::vector< std::vector<std::string> > DFDict;
    typedef struct
    {
        DFDict translations;
        DFDict foreign_languages;
    } Dicts;
    
    class DFHACK_EXPORT Translation
    {
        public:
        Translation(APIPrivate * d);
        ~Translation();
        bool Start();
        bool Finish();
        /*
        * DF translation tables and name translation
        */
        // Get pointer to the two dictionary structures
        Dicts * getDicts();
        // translate a name using the loaded dictionaries
        std::string TranslateName(const DFHack::t_name& name, bool inEnglish = true);
        
        private:
        struct Private;
        Private *d;
    };
}
#endif
