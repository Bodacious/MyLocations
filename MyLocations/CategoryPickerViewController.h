@class CategoryPickerViewController;

@protocol CategoryPickerViewControllerDelegate <NSObject>
- (void)categoryPicker:(CategoryPickerViewController *)picker didPickCategory:(NSString *)categoryName;
@end

@interface CategoryPickerViewController : UITableViewController

@property (nonatomic, weak) id <CategoryPickerViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString *selectedCategoryName;

@end