//
// Generated file, do not edit! Created by nedtool 4.6 from attacks/controlmessages/delayAttack/NA_DelayMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NA_DelayMessage_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(NA_DelayMessage);

NA_DelayMessage::NA_DelayMessage(const char *name, int kind) : ::cMessage(name,kind)
{
    this->delayAttackProbability_var = 0;
}

NA_DelayMessage::NA_DelayMessage(const NA_DelayMessage& other) : ::cMessage(other)
{
    copy(other);
}

NA_DelayMessage::~NA_DelayMessage()
{
}

NA_DelayMessage& NA_DelayMessage::operator=(const NA_DelayMessage& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void NA_DelayMessage::copy(const NA_DelayMessage& other)
{
    this->delayAttackProbability_var = other.delayAttackProbability_var;
    this->delayAttackValue_var = other.delayAttackValue_var;
}

void NA_DelayMessage::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->delayAttackProbability_var);
    doPacking(b,this->delayAttackValue_var);
}

void NA_DelayMessage::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->delayAttackProbability_var);
    doUnpacking(b,this->delayAttackValue_var);
}

double NA_DelayMessage::getDelayAttackProbability() const
{
    return delayAttackProbability_var;
}

void NA_DelayMessage::setDelayAttackProbability(double delayAttackProbability)
{
    this->delayAttackProbability_var = delayAttackProbability;
}

ParPtr& NA_DelayMessage::getDelayAttackValue()
{
    return delayAttackValue_var;
}

void NA_DelayMessage::setDelayAttackValue(const ParPtr& delayAttackValue)
{
    this->delayAttackValue_var = delayAttackValue;
}

class NA_DelayMessageDescriptor : public cClassDescriptor
{
  public:
    NA_DelayMessageDescriptor();
    virtual ~NA_DelayMessageDescriptor();

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

Register_ClassDescriptor(NA_DelayMessageDescriptor);

NA_DelayMessageDescriptor::NA_DelayMessageDescriptor() : cClassDescriptor("NA_DelayMessage", "cMessage")
{
}

NA_DelayMessageDescriptor::~NA_DelayMessageDescriptor()
{
}

bool NA_DelayMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NA_DelayMessage *>(obj)!=NULL;
}

const char *NA_DelayMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NA_DelayMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NA_DelayMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *NA_DelayMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "delayAttackProbability",
        "delayAttackValue",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NA_DelayMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "delayAttackProbability")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "delayAttackValue")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NA_DelayMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "ParPtr",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NA_DelayMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NA_DelayMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NA_DelayMessage *pp = (NA_DelayMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NA_DelayMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NA_DelayMessage *pp = (NA_DelayMessage *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getDelayAttackProbability());
        case 1: {std::stringstream out; out << pp->getDelayAttackValue(); return out.str();}
        default: return "";
    }
}

bool NA_DelayMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NA_DelayMessage *pp = (NA_DelayMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setDelayAttackProbability(string2double(value)); return true;
        default: return false;
    }
}

const char *NA_DelayMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(ParPtr));
        default: return NULL;
    };
}

void *NA_DelayMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NA_DelayMessage *pp = (NA_DelayMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getDelayAttackValue()); break;
        default: return NULL;
    }
}


