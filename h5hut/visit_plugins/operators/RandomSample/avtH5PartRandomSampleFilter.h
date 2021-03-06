// ************************************************************************* //
//  File: avtH5PartRandomSampleFilter.h
// ************************************************************************* //

#ifndef AVT_H5PartRandomSample_FILTER_H
#define AVT_H5PartRandomSample_FILTER_H


#include <avtPluginStreamer.h>
#include <H5PartRandomSampleAttributes.h>

class vtkDataSet;
class vtkIdList;

// ****************************************************************************
//  Class: avtH5PartRandomSampleFilter
//
//  Purpose:
//      A plugin operator for H5PartRandomSample.
//
//  Programmer: cristina -- generated by xml2avt
//  Creation:   Thu Mar 2 13:48:31 PST 2006
//
// ****************************************************************************

class avtH5PartRandomSampleFilter : public avtPluginStreamer
{
public:
	avtH5PartRandomSampleFilter();
	virtual             ~avtH5PartRandomSampleFilter();

	static avtFilter    *Create();

	virtual const char  *GetType(void)  {
		return "avtH5PartRandomSampleFilter";
	};
	virtual const char  *GetDescription(void)
	{
		return "H5PartRandomSample";
	};

	virtual void         SetAtts(const AttributeGroup*);
	virtual bool         Equivalent(const AttributeGroup*);

protected:
	H5PartRandomSampleAttributes atts;

	virtual vtkDataSet   *ExecuteData(vtkDataSet *, int, std::string);

private:

	long int npoints;
	unsigned int seed;
	vtkIdList *idList;
};


#endif
