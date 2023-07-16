/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcKerbTypeEnum.h"

// TYPE IfcKerbTypeEnum = ENUMERATION OF	(USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcKerbTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCKERBTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcKerbTypeEnum> IFC4X3::IfcKerbTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcKerbTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcKerbTypeEnum>(); }
	shared_ptr<IfcKerbTypeEnum> type_object( new IfcKerbTypeEnum() );
	if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcKerbTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcKerbTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}