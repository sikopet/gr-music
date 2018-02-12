/* -*- c++ -*- */
/*
 * Copyright 2018
 * Kabir Marwah <km3415@ic.ac.uk>
 */


#ifndef INCLUDED_DOA_FIND_LOCAL_MAX_H
#define INCLUDED_DOA_FIND_LOCAL_MAX_H

#include <doa/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace doa {

    /*!
     * \brief Finds a given number of local maxima in a vector. 
     * \ingroup doa
     * 
     * \details
     * This block takes a vector of size (vector-length x 1) 
     * as input and outputs a float vector of size (number of max. values x 1)
     * consisting of max. values and a float vector of size (number of max. values x 1)
     * consisting of their locations. 
     */
    class DOA_API find_local_max : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<find_local_max> sptr;

      /*!
       * \brief Make a block to find the local maxima and their locations 
       *
       * \param num_max_vals    Number of max. values
       * \param vector_len      Length of the input vector
       * \param x_min           Min. value of the index vector
       * \param x_max           Max. value of the index vector
       */
      static sptr make(int num_max_vals, int vector_len, float x_min, float x_max);
    };

  } // namespace doa
} // namespace gr

#endif /* INCLUDED_DOA_FIND_LOCAL_MAX_H */

