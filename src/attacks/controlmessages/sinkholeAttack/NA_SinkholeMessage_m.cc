//
// Generated file, do not edit! Created by opp_msgc 4.3 from attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NA_SinkholeMessage_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(NA_SinkholeMessage);

NA_SinkholeMessage::NA_SinkholeMessage(const char *name, int kind) : cMessage(name,kind)
{
    this->sinkOnlyWhenRouteInTable_var = 0;
    this->sinkholeAttackProbability_var = 0;
    this->numHops_var = 0;
}

NA_SinkholeMessage::NA_SinkholeMessage(const NA_SinkholeMessage& other) : cMessage(other)
{
    copy(other);
}

NA_SinkholeMessage::~NA_SinkholeMessage()
{
}

NA_SinkholeMessage& NA_SinkholeMessage::operator=(const NA_SinkholeMessage& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void NA_SinkholeMessage::copy(const NA_SinkholeMessage& other)
{
    this->sinkOnlyWhenRouteInTable_var = other.sinkOnlyWhenRouteInTable_var;
    this->sinkholeAttackProbability_var = other.sinkholeAttackProbability_var;
    this->seqnoAdded_var = other.seqnoAdded_var;
    this->numHops_var = other.numHops_var;
}

void NA_SinkholeMessage::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->sinkOnlyWhenRouteInTable_var);
    doPacking(b,this->sinkholeAttackProbability_var);
    doPacking(b,this->seqnoAdded_var);
    doPacking(b,this->numHops_var);
}

void NA_SinkholeMessage::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->sinkOnlyWhenRouteInTable_var);
    doUnpacking(b,this->sinkholeAttackProbability_var);
    doUnpacking(b,this->seqnoAdded_var);
    doUnpacking(b,this->numHops_var);
}

bool NA_SinkholeMessage::getSinkOnlyWhenRouteInTable() const
{
    return sinkOnlyWhenRouteInTable_var;
}

void NA_SinkholeMessage::setSinkOnlyWhenRouteInTable(bool sinkOnlyWhenRouteInTable)
{
    this->sinkOnlyWhenRouteInTable_var = sinkOnlyWhenRouteInTable;
}

double NA_SinkholeMessage::getSinkholeAttackProbability() const
{
    return sinkholeAttackProbability_var;
}

void NA_SinkholeMessage::setSinkholeAttackProbability(double sinkholeAttackProbability)
{
    this->sinkholeAttackProbability_var = sinkholeAttackProbability;
}

ParPtr& NA_SinkholeMessage::getSeqnoAdded()
{
    return seqnoAdded_var;
}

void NA_SinkholeMessage::setSeqnoAdded(const ParPtr& seqnoAdded)
{
    this->seqnoAdded_var = seqnoAdded;
}

int NA_SinkholeMessage::getNumHops() const
{
    return numHops_var;
}

void NA_SinkholeMessage::setNumHops(int numHops)
{
    this->numHops_var = numHops;
}

class NA_SinkholeMessageDescriptor : public cClassDescriptor
{
  public:
    NA_SinkholeMessageDescriptor();
    virtual ~NA_SinkholeMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(NA_SinkholeMessageDescriptor);

NA_SinkholeMessageDescriptor::NA_SinkholeMessageDescriptor() : cClassDescriptor("NA_SinkholeMessage", "cMessage")
{
}

NA_SinkholeMessageDescriptor::~NA_SinkholeMessageDescriptor()
{
}

bool NA_SinkholeMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NA_SinkholeMessage *>(obj)!=NULL;
}

const char *NA_SinkholeMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NA_SinkholeMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int NA_SinkholeMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *NA_SinkholeMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sinkOnlyWhenRouteInTable",
        "sinkholeAttackProbability",
        "seqnoAdded",
        "numHops",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int NA_SinkholeMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sinkOnlyWhenRouteInTable")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sinkholeAttackProbability")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqnoAdded")==0) return base+2;
    if (fieldName[0]=='n' && strcmp(fieldName, "numHops")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NA_SinkholeMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "double",
        "ParPtr",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *NA_SinkholeMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int NA_SinkholeMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NA_SinkholeMessage *pp = (NA_SinkholeMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NA_SinkholeMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NA_SinkholeMessage *pp = (NA_SinkholeMessage *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getSinkOnlyWhenRouteInTable());
        case 1: return double2string(pp->getSinkholeAttackProbability());
        case 2: {std::stringstream out; out << pp->getSeqnoAdded(); return out.str();}
        case 3: return long2string(pp->getNumHops());
        default: return "";
    }
}

bool NA_SinkholeMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NA_SinkholeMessage *pp = (NA_SinkholeMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSinkOnlyWhenRouteInTable(string2bool(value)); return true;
        case 1: pp->setSinkholeAttackProbability(string2double(value)); return true;
        case 3: pp->setNumHops(string2long(value)); return true;
        default: return false;
    }
}

const char *NA_SinkholeMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
        "ParPtr",
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *NA_SinkholeMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NA_SinkholeMessage *pp = (NA_SinkholeMessage *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSeqnoAdded()); break;
        default: return NULL;
    }
}


