#ifndef FEM_UTILS_HPP
#define FEM_UTILS_HPP

#pragma once

template<typename ITYPE, typename RTYPE>
class FEM_Utils
{
    private:
        ITYPE pOrder;
        ITYPE nDims;
        ITYPE nNodes;
        ITYPE nGausPts;
        RTYPE *xgp1D;
        RTYPE *wgp1D;
        RTYPE *xgp;
        RTYPE *wgp;
        RTYPE *Ngp;
        RTYPE *dNgp;
        RTYPE *Lagr_gp;
        RTYPE *dLagr_gp;
        void set_GP1D();
    public:
        FEM_Utils();
        FEM_Utils(ITYPE p, ITYPE nD);
        ~FEM_Utils();
        void computeGaussPoints();
};

#endif // FEM_UTILS_HPP