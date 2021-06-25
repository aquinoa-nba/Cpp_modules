#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}

int	Account::getNbAccounts( void ) { return Account::_nbAccounts; }

int	Account::getTotalAmount( void ) { return Account::_totalAmount; }

int	Account::getNbDeposits( void ) { return Account::_totalNbDeposits; }

int	Account::getNbWithdrawals( void ) { return Account::_totalNbWithdrawals; }

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts \
				<< ";total:" << _totalAmount \
				<< ";deposits:" << _totalNbDeposits \
				<< ";withdrawals:" << _totalNbWithdrawals << '\n';

}

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	static int Index;
	_accountIndex = Index;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	Index++;
	Account::_nbAccounts = _accountIndex + 1;
	Account::_totalAmount += _amount;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	Account::_nbAccounts--;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += _nbDeposits;
	_amount += deposit;
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex \
				<< ";p_amount:" << _amount - deposit \
				<< ";deposit:" << deposit \
				<< ";amount:" << _amount \
				<< ";nb_deposits:" << _nbDeposits << '\n';
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex \
				<< ";p_amount:" << _amount \
				<< ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused\n";
		return false;
	}	
	_amount -= withdrawal;
	std::cout	<< withdrawal \
				<< ";amount:" << _amount \
				<< ";nb_withdrawals:" << ++_nbWithdrawals << '\n';
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return true;
}

int		Account::checkAmount( void ) const { return 0;}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex \
				<< ";amount:" << _amount \
				<< ";deposits:" << _nbDeposits \
				<< ";withdrawals:" << _nbWithdrawals << '\n';
}
