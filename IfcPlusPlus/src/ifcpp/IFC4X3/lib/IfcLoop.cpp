/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLoop.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcLoop 
IFC4X3::IfcLoop::IfcLoop( int tag ) { m_tag = tag; }
void IFC4X3::IfcLoop::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCLOOP" << "(";
	stream << ");";
}
void IFC4X3::IfcLoop::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcLoop::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
}
void IFC4X3::IfcLoop::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcTopologicalRepresentationItem::getAttributes( vec_attributes );
}
void IFC4X3::IfcLoop::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcTopologicalRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcLoop::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTopologicalRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcLoop::unlinkFromInverseCounterparts()
{
	IfcTopologicalRepresentationItem::unlinkFromInverseCounterparts();
}