/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfLinearSubgradeReactionMeasure.h"
#include "ifcpp/IFC4X3/include/IfcModulusOfTranslationalSubgradeReactionSelect.h"

// TYPE IfcModulusOfTranslationalSubgradeReactionSelect = SELECT	(IfcBoolean	,IfcModulusOfLinearSubgradeReactionMeasure);
shared_ptr<IFC4X3::IfcModulusOfTranslationalSubgradeReactionSelect> IFC4X3::IfcModulusOfTranslationalSubgradeReactionSelect::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.empty() ){ return shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>(); }
	if( arg.compare("$")==0 )
	{
		return shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>();
	}
	if( arg.compare("*")==0 )
	{
		return shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>();
	}
	shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect> result_object;
	readSelectType( arg, result_object, map, errorStream );
	return result_object;
}