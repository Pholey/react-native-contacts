#import "RCTBridgeModule.h"

@import AddressBook;
@import AddressBookUI;

@interface RCTContacts : NSObject <RCTBridgeModule, ABPeoplePickerNavigationControllerDelegate>

@end
