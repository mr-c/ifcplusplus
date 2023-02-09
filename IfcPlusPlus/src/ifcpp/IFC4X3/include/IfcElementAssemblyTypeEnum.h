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
	// TYPE IfcElementAssemblyTypeEnum = ENUMERATION OF	(ABUTMENT	,ACCESSORY_ASSEMBLY	,ARCH	,BEAM_GRID	,BRACED_FRAME	,CROSS_BRACING	,DECK	,DILATATIONPANEL	,ENTRANCEWORKS	,GIRDER	,GRID	,MAST	,PIER	,PYLON	,RAIL_MECHANICAL_EQUIPMENT_ASSEMBLY	,REINFORCEMENT_UNIT	,RIGID_FRAME	,SHELTER	,SIGNALASSEMBLY	,SLAB_FIELD	,SUMPBUSTER	,SUPPORTINGASSEMBLY	,SUSPENSIONASSEMBLY	,TRACKPANEL	,TRACTION_SWITCHING_ASSEMBLY	,TRAFFIC_CALMING_DEVICE	,TRUSS	,TURNOUTPANEL	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcElementAssemblyTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcElementAssemblyTypeEnumEnum
		{
			ENUM_ABUTMENT,
			ENUM_ACCESSORY_ASSEMBLY,
			ENUM_ARCH,
			ENUM_BEAM_GRID,
			ENUM_BRACED_FRAME,
			ENUM_CROSS_BRACING,
			ENUM_DECK,
			ENUM_DILATATIONPANEL,
			ENUM_ENTRANCEWORKS,
			ENUM_GIRDER,
			ENUM_GRID,
			ENUM_MAST,
			ENUM_PIER,
			ENUM_PYLON,
			ENUM_RAIL_MECHANICAL_EQUIPMENT_ASSEMBLY,
			ENUM_REINFORCEMENT_UNIT,
			ENUM_RIGID_FRAME,
			ENUM_SHELTER,
			ENUM_SIGNALASSEMBLY,
			ENUM_SLAB_FIELD,
			ENUM_SUMPBUSTER,
			ENUM_SUPPORTINGASSEMBLY,
			ENUM_SUSPENSIONASSEMBLY,
			ENUM_TRACKPANEL,
			ENUM_TRACTION_SWITCHING_ASSEMBLY,
			ENUM_TRAFFIC_CALMING_DEVICE,
			ENUM_TRUSS,
			ENUM_TURNOUTPANEL,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcElementAssemblyTypeEnum() = default;
		IfcElementAssemblyTypeEnum( IfcElementAssemblyTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2841622424; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcElementAssemblyTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcElementAssemblyTypeEnumEnum m_enum;
	};
}