#ifndef APPS_SFDL_HW_V_INP_GEN_HW_H_
#define APPS_SFDL_HW_V_INP_GEN_HW_H_

#include <libv/libv.h>
#include <common/utility.h>
#include <apps_sfdl_gen/horspool_v_inp_gen.h>
#include <apps_sfdl_gen/horspool_cons.h>
#pragma pack(push)
#pragma pack(1)

//using namespace horspool_cons;

/*
* Provides the ability for user-defined input creation
*/
class horspoolVerifierInpGenHw : public InputCreator {
  public:
    horspoolVerifierInpGenHw(Venezia* v);

    void create_input(mpq_t* input_q, int num_inputs);
  private:
    Venezia* v;
    horspoolVerifierInpGen compiler_implementation;

};
#pragma pack(pop)
#endif  // APPS_SFDL_HW_V_INP_GEN_HW_H_
