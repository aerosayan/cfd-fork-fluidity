// ************************************************************************* //
//  File: h5partPluginInfo.C
// ************************************************************************* //

#include <h5partPluginInfo.h>

#include <visit-config.h>
#if defined(__APPLE__)
extern "C" const char *h5partVisItPluginVersion = VERSION;
#else
extern "C" const char *VisItPluginVersion = VERSION;
#endif

#if defined(__APPLE__)
#define GetGeneralInfo h5part_GetGeneralInfo
#endif

// ****************************************************************************
//  Function:  GetGeneralInfo
//
//  Purpose:
//    Return a new GeneralPluginInfo for the h5part database.
//
//  Programmer:  cristina -- generated by xml2info
//  Creation:    Thu Mar 9 09:51:18 PDT 2006
//
// ****************************************************************************
extern "C" GeneralDatabasePluginInfo* GetGeneralInfo()
{
    return new h5partGeneralPluginInfo;
}

// ****************************************************************************
//  Method: h5partGeneralPluginInfo::GetName
//
//  Purpose:
//    Return the name of the database plugin.
//
//  Returns:    A pointer to the name of the database plugin.
//
//  Programmer: cristina -- generated by xml2info
//  Creation:   Thu Mar 9 09:51:18 PDT 2006
//
// ****************************************************************************

char *
h5partGeneralPluginInfo::GetName() const
{
    return "h5part";
}

// ****************************************************************************
//  Method: h5partGeneralPluginInfo::GetVersion
//
//  Purpose:
//    Return the version of the database plugin.
//
//  Returns:    A pointer to the version of the database plugin.
//
//  Programmer: cristina -- generated by xml2info
//  Creation:   Thu Mar 9 09:51:18 PDT 2006
//
// ****************************************************************************

char *
h5partGeneralPluginInfo::GetVersion() const
{
    return "1.0";
}

// ****************************************************************************
//  Method: h5partGeneralPluginInfo::GetID
//
//  Purpose:
//    Return the id of the database plugin.
//
//  Returns:    A pointer to the id of the database plugin.
//
//  Programmer: cristina -- generated by xml2info
//  Creation:   Thu Mar 9 09:51:18 PDT 2006
//
// ****************************************************************************

char *
h5partGeneralPluginInfo::GetID() const
{
    return "h5part_1.0";
}
// ****************************************************************************
//  Method: h5partGeneralPluginInfo::EnabledByDefault
//
//  Purpose:
//    Return true if this plugin should be enabled by default; false otherwise.
//
//  Returns:    true/false
//
//  Programmer: cristina -- generated by xml2info
//  Creation:   Thu Mar 9 09:51:18 PDT 2006
//
// ****************************************************************************

bool
h5partGeneralPluginInfo::EnabledByDefault() const
{
    return true;
}
// ****************************************************************************
//  Method: h5partGeneralPluginInfo::HasWriter
//
//  Purpose:
//    Return true if this plugin has a database writer.
//
//  Returns:    true/false
//
//  Programmer: cristina -- generated by xml2info
//  Creation:   Thu Mar 9 09:51:18 PDT 2006
//
// ****************************************************************************

bool
h5partGeneralPluginInfo::HasWriter() const
{
    return false;
}
