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
	// TYPE IfcWellKnownTextLiteral = STRING;
	class IFCQUERY_EXPORT IfcWellKnownTextLiteral : public BuildingObject
	{
	public:
		IfcWellKnownTextLiteral() = default;
		IfcWellKnownTextLiteral( std::string value );
		virtual uint32_t classID() const { return 2149462589; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcWellKnownTextLiteral> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		std::string m_value;
	};
}