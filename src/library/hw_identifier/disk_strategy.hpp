/*
 * disk_strategy.hpp
 *
 *  Created on: Jan 14, 2020
 *      Author: devel
 */

#ifndef SRC_LIBRARY_PC_IDENTIFIER_DISK_STRATEGY_HPP_
#define SRC_LIBRARY_PC_IDENTIFIER_DISK_STRATEGY_HPP_

#include "identification_strategy.hpp"

namespace license {
namespace hw_identifier {

class DiskStrategy : public IdentificationStrategy {
private:
	bool m_use_id;
public:
	DiskStrategy(bool use_id);
	virtual ~DiskStrategy();
	virtual LCC_API_IDENTIFICATION_STRATEGY identification_strategy() const;
	virtual std::vector<HwIdentifier> alternative_ids() const;
};

}  // namespace hw_identifier
} /* namespace license */

#endif /* SRC_LIBRARY_PC_IDENTIFIER_DISK_STRATEGY_HPP_ */
