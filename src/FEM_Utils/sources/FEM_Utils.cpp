#include "FEM_Utils.hpp"

template<typename ITYPE, typename RTYPE>
FEM_Utils<ITYPE, RTYPE>::FEM_Utils() {
    pOrder = 0;
    nDims = 0;
    nNodes = 0;
    nGausPts = 0;
    xgp1D = nullptr;
    wgp1D = nullptr;
    xgp = nullptr;
    wgp = nullptr;
    Ngp = nullptr;
    dNgp = nullptr;
    Lagr_gp = nullptr;
    dLagr_gp = nullptr;
}

template <typename ITYPE, typename RTYPE>
FEM_Utils<ITYPE, RTYPE>::FEM_Utils(ITYPE p, ITYPE nD)
{
    pOrder = p;
    nDims = nD;
    nNodes = pow(pOrder + 1, nDims);
    nGausPts = nNodes;
    xgp1D = (RTYPE*)calloc((pOrder + 1), sizeof(RTYPE));
    wgp1D = (RTYPE*)calloc((pOrder + 1), sizeof(RTYPE));
    xgp = nullptr;
    wgp1D = nullptr;
    xgp = nullptr;
    wgp = nullptr;
    Ngp = nullptr;
    dNgp = nullptr;
    Lagr_gp = nullptr;
    dLagr_gp = nullptr;
}