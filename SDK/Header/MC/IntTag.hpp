// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class IntTag : public Tag {

#define AFTER_EXTRA
// Add Member There
int val;

public:
    inline int& value() {
        return dAccess<int, 8>(this);
    }
    inline IntTag& operator=(int val) {
        value() = val;
        return *this;
    }
    inline static IntTag* create(int val = 0) {
        IntTag* tag = (IntTag*)Tag::createTag(Tag::Type::Int);
        *tag = val;
        return tag;
    }
    inline bool set(int val) {
        if (getTagType() != Tag::Type::Int)
            return false;
        value() = val;
        return true;
    }
    inline int get() {
        return value();
    }

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTTAG
public:
    class IntTag& operator=(class IntTag const&) = delete;
    IntTag(class IntTag const&) = delete;
#endif

public:
    /*0*/ virtual ~IntTag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput&) const;
    /*3*/ virtual void load(class IDataInput&);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual enum Tag::Type getId() const;
    /*6*/ virtual bool equals(class Tag const&) const;
    /*7*/ virtual std::unique_ptr<class Tag> copy() const;
    /*8*/ virtual unsigned __int64 hash() const;
    /*
    inline  ~IntTag(){
         (IntTag::*rv)();
        *((void**)&rv) = dlsym("??1IntTag@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI IntTag(int);
    MCAPI IntTag();

protected:

private:

};