// This file is generated by omniidl (C++ backend)- omniORB_4_0. Do not edit.
#ifndef __walkpluginJRL_hh__
#define __walkpluginJRL_hh__

#ifndef USE_omniORB_logStream
#define USE_omniORB_logStream
#endif

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_walkpluginJRL
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_walkpluginJRL
#endif



#ifndef __common_hh_EXTERNAL_GUARD__
#define __common_hh_EXTERNAL_GUARD__
#include <common.h>
#endif



#ifdef USE_stub_in_nt_dll
#ifndef USE_core_stub_in_nt_dll
#define USE_core_stub_in_nt_dll
#endif
#ifndef USE_dyn_stub_in_nt_dll
#define USE_dyn_stub_in_nt_dll
#endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





#ifndef __walkpluginJRL__
#define __walkpluginJRL__

class walkpluginJRL;
class _objref_walkpluginJRL;
class _impl_walkpluginJRL;

typedef _objref_walkpluginJRL* walkpluginJRL_ptr;
typedef walkpluginJRL_ptr walkpluginJRLRef;

class walkpluginJRL_Helper {
public:
  typedef walkpluginJRL_ptr _ptr_type;

  static _ptr_type _nil();
  static _CORBA_Boolean is_nil(_ptr_type);
  static void release(_ptr_type);
  static void duplicate(_ptr_type);
  static void marshalObjRef(_ptr_type, cdrStream&);
  static _ptr_type unmarshalObjRef(cdrStream&);
};

typedef _CORBA_ObjRef_Var<_objref_walkpluginJRL, walkpluginJRL_Helper> walkpluginJRL_var;
typedef _CORBA_ObjRef_OUT_arg<_objref_walkpluginJRL,walkpluginJRL_Helper > walkpluginJRL_out;

#endif

class walkpluginJRL {
public:
  // Declarations for this interface type.
  typedef walkpluginJRL_ptr _ptr_type;
  typedef walkpluginJRL_var _var_type;

  static _ptr_type _duplicate(_ptr_type);
  static _ptr_type _narrow(CORBA::Object_ptr);
  static _ptr_type _unchecked_narrow(CORBA::Object_ptr);
  static _ptr_type _nil();

  static inline void _marshalObjRef(_ptr_type, cdrStream&);

  static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
    omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
    if (o)
      return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
    else
      return _nil();
  }

  static _core_attr const char* _PD_repoId;

  // Other IDL defined within this scope.
  
};

class _objref_walkpluginJRL :
  public virtual _objref_Plugin
{
public:
  void setTargetPos(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  void setTargetPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  void setArc(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  void setArcNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  void setRfootPos(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  void setRfootPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  void setLfootPos(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  void setLfootPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th);
  CORBA::Long getLegJointSpeed(dsequence_out dq);
  void stopWalking();
  void waitArrival();
  void startStepping();
  void stopStepping();
  void setWalkingVelocity(CORBA::Float dx, CORBA::Float dy, CORBA::Float dth);
  void getWaistVelocity(CORBA::Float& vx, CORBA::Float& vy, CORBA::Float& omega);
  void getWaistPositionAndOrientation(TransformQuaternion& aTQ, CORBA::Float& Orientation);
  void setWaistPositionAndOrientation(const TransformQuaternion& aTQ);
  void getWaistAcceleration(TransformQuaternion& aTQ);
  CORBA::Boolean isWalking();

  inline _objref_walkpluginJRL()  { _PR_setobj(0); }  // nil
  _objref_walkpluginJRL(omniIOR*, omniIdentity*);

protected:
  virtual ~_objref_walkpluginJRL();

  
private:
  virtual void* _ptrToObjRef(const char*);

  _objref_walkpluginJRL(const _objref_walkpluginJRL&);
  _objref_walkpluginJRL& operator = (const _objref_walkpluginJRL&);
  // not implemented

  friend class walkpluginJRL;
};

class _pof_walkpluginJRL : public _OMNI_NS(proxyObjectFactory) {
public:
  inline _pof_walkpluginJRL() : _OMNI_NS(proxyObjectFactory)(walkpluginJRL::_PD_repoId) {}
  virtual ~_pof_walkpluginJRL();

  virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
  virtual _CORBA_Boolean is_a(const char*) const;
};

class _impl_walkpluginJRL :
  public virtual _impl_Plugin
{
public:
  virtual ~_impl_walkpluginJRL();

  virtual void setTargetPos(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual void setTargetPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual void setArc(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual void setArcNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual void setRfootPos(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual void setRfootPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual void setLfootPos(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual void setLfootPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) = 0;
  virtual CORBA::Long getLegJointSpeed(dsequence_out dq) = 0;
  virtual void stopWalking() = 0;
  virtual void waitArrival() = 0;
  virtual void startStepping() = 0;
  virtual void stopStepping() = 0;
  virtual void setWalkingVelocity(CORBA::Float dx, CORBA::Float dy, CORBA::Float dth) = 0;
  virtual void getWaistVelocity(CORBA::Float& vx, CORBA::Float& vy, CORBA::Float& omega) = 0;
  virtual void getWaistPositionAndOrientation(TransformQuaternion& aTQ, CORBA::Float& Orientation) = 0;
  virtual void setWaistPositionAndOrientation(const TransformQuaternion& aTQ) = 0;
  virtual void getWaistAcceleration(TransformQuaternion& aTQ) = 0;
  virtual CORBA::Boolean isWalking() = 0;
  
public:  // Really protected, workaround for xlC
  virtual _CORBA_Boolean _dispatch(omniCallHandle&);

private:
  virtual void* _ptrToInterface(const char*);
  virtual const char* _mostDerivedRepoId();
};




class POA_walkpluginJRL :
  public virtual _impl_walkpluginJRL,
  public virtual POA_Plugin
{
public:
  virtual ~POA_walkpluginJRL();

  inline ::walkpluginJRL_ptr _this() {
    return (::walkpluginJRL_ptr) _do_this(::walkpluginJRL::_PD_repoId);
  }
};



template <class _omniT>
class POA_walkpluginJRL_tie : public virtual POA_walkpluginJRL
{
public:
  POA_walkpluginJRL_tie(_omniT& t)
    : pd_obj(&t), pd_poa(0), pd_rel(0) {}
  POA_walkpluginJRL_tie(_omniT& t, PortableServer::POA_ptr p)
    : pd_obj(&t), pd_poa(p), pd_rel(0) {}
  POA_walkpluginJRL_tie(_omniT* t, CORBA::Boolean r=1)
    : pd_obj(t), pd_poa(0), pd_rel(r) {}
  POA_walkpluginJRL_tie(_omniT* t, PortableServer::POA_ptr p,CORBA::Boolean r=1)
    : pd_obj(t), pd_poa(p), pd_rel(r) {}
  ~POA_walkpluginJRL_tie() {
    if( pd_poa )  CORBA::release(pd_poa);
    if( pd_rel )  delete pd_obj;
  }

  _omniT* _tied_object() { return pd_obj; }

  void _tied_object(_omniT& t) {
    if( pd_rel )  delete pd_obj;
    pd_obj = &t;
    pd_rel = 0;
  }

  void _tied_object(_omniT* t, CORBA::Boolean r=1) {
    if( pd_rel )  delete pd_obj;
    pd_obj = t;
    pd_rel = r;
  }

  CORBA::Boolean _is_owner()        { return pd_rel; }
  void _is_owner(CORBA::Boolean io) { pd_rel = io;   }

  PortableServer::POA_ptr _default_POA() {
    if( !pd_poa )  return PortableServer::POA::_the_root_poa();
    else           return PortableServer::POA::_duplicate(pd_poa);
  }

  void setTargetPos(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setTargetPos(x, y, th); }
  void setTargetPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setTargetPosNoWait(x, y, th); }
  void setArc(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setArc(x, y, th); }
  void setArcNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setArcNoWait(x, y, th); }
  void setRfootPos(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setRfootPos(x, y, th); }
  void setRfootPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setRfootPosNoWait(x, y, th); }
  void setLfootPos(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setLfootPos(x, y, th); }
  void setLfootPosNoWait(CORBA::Float x, CORBA::Float y, CORBA::Float th) { pd_obj->setLfootPosNoWait(x, y, th); }
  CORBA::Long getLegJointSpeed(dsequence_out dq) { return pd_obj->getLegJointSpeed(dq); }
  void stopWalking() { pd_obj->stopWalking(); }
  void waitArrival() { pd_obj->waitArrival(); }
  void startStepping() { pd_obj->startStepping(); }
  void stopStepping() { pd_obj->stopStepping(); }
  void setWalkingVelocity(CORBA::Float dx, CORBA::Float dy, CORBA::Float dth) { pd_obj->setWalkingVelocity(dx, dy, dth); }
  void getWaistVelocity(CORBA::Float& vx, CORBA::Float& vy, CORBA::Float& omega) { pd_obj->getWaistVelocity(vx, vy, omega); }
  void getWaistPositionAndOrientation(TransformQuaternion& aTQ, CORBA::Float& Orientation) { pd_obj->getWaistPositionAndOrientation(aTQ, Orientation); }
  void setWaistPositionAndOrientation(const TransformQuaternion& aTQ) { pd_obj->setWaistPositionAndOrientation(aTQ); }
  void getWaistAcceleration(TransformQuaternion& aTQ) { pd_obj->getWaistAcceleration(aTQ); }
  CORBA::Boolean isWalking() { return pd_obj->isWalking(); }
  void start() { pd_obj->start(); }
  void stop() { pd_obj->stop(); }
  void sendMsg(const char* msg) { pd_obj->sendMsg(msg); }


private:
  _omniT*                 pd_obj;
  PortableServer::POA_ptr pd_poa;
  CORBA::Boolean          pd_rel;
};



#undef _core_attr
#undef _dyn_attr



inline void
walkpluginJRL::_marshalObjRef(::walkpluginJRL_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_walkpluginJRL
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_walkpluginJRL
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_walkpluginJRL
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_walkpluginJRL
#endif

#endif  // __walkpluginJRL_hh__
