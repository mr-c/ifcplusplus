/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcComplexProperty.h"
#include "ifcpp/IFC4X3/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcProperty.h"
#include "ifcpp/IFC4X3/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4X3/include/IfcPropertySet.h"
#include "ifcpp/IFC4X3/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4X3/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcProperty 
IFC4X3::IfcProperty::IfcProperty( int tag ) { m_tag = tag; }
void IFC4X3::IfcProperty::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCPROPERTY" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Specification ) { m_Specification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcProperty::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcProperty::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcProperty, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map, errorStream );
	m_Specification = IfcText::createObjectFromSTEP( args[1], map, errorStream );
}
void IFC4X3::IfcProperty::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcPropertyAbstraction::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.emplace_back( std::make_pair( "Specification", m_Specification ) );
}
void IFC4X3::IfcProperty::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcPropertyAbstraction::getAttributesInverse( vec_attributes_inverse );
	shared_ptr<AttributeObjectVector> PartOfPset_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_PartOfPset_inverse.size(); ++i )
	{
		if( !m_PartOfPset_inverse[i].expired() )
		{
			PartOfPset_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcPropertySet>( m_PartOfPset_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "PartOfPset_inverse", PartOfPset_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> PropertyForDependance_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_PropertyForDependance_inverse.size(); ++i )
	{
		if( !m_PropertyForDependance_inverse[i].expired() )
		{
			PropertyForDependance_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcPropertyDependencyRelationship>( m_PropertyForDependance_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "PropertyForDependance_inverse", PropertyForDependance_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> PropertyDependsOn_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_PropertyDependsOn_inverse.size(); ++i )
	{
		if( !m_PropertyDependsOn_inverse[i].expired() )
		{
			PropertyDependsOn_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcPropertyDependencyRelationship>( m_PropertyDependsOn_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "PropertyDependsOn_inverse", PropertyDependsOn_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> PartOfComplex_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_PartOfComplex_inverse.size(); ++i )
	{
		if( !m_PartOfComplex_inverse[i].expired() )
		{
			PartOfComplex_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcComplexProperty>( m_PartOfComplex_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "PartOfComplex_inverse", PartOfComplex_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> HasConstraints_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasConstraints_inverse.size(); ++i )
	{
		if( !m_HasConstraints_inverse[i].expired() )
		{
			HasConstraints_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcResourceConstraintRelationship>( m_HasConstraints_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasConstraints_inverse", HasConstraints_inverse_vec_obj ) );
	shared_ptr<AttributeObjectVector> HasApprovals_inverse_vec_obj( new AttributeObjectVector() );
	for( size_t i=0; i<m_HasApprovals_inverse.size(); ++i )
	{
		if( !m_HasApprovals_inverse[i].expired() )
		{
			HasApprovals_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcResourceApprovalRelationship>( m_HasApprovals_inverse[i] ) );
		}
	}
	vec_attributes_inverse.emplace_back( std::make_pair( "HasApprovals_inverse", HasApprovals_inverse_vec_obj ) );
}
void IFC4X3::IfcProperty::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPropertyAbstraction::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcProperty::unlinkFromInverseCounterparts()
{
	IfcPropertyAbstraction::unlinkFromInverseCounterparts();
}