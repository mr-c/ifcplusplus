/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcSystemFurnitureElementTypeEnum = ENUMERATION OF	(PANEL	,SUBRACK	,WORKSURFACE	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcSystemFurnitureElementTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSystemFurnitureElementTypeEnumEnum
		{
			ENUM_PANEL,
			ENUM_SUBRACK,
			ENUM_WORKSURFACE,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcSystemFurnitureElementTypeEnum() = default;
		IfcSystemFurnitureElementTypeEnum( IfcSystemFurnitureElementTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1021971458; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcSystemFurnitureElementTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcSystemFurnitureElementTypeEnumEnum m_enum;
	};
}