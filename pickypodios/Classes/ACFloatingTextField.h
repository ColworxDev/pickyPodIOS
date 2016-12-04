//
//  ACFloatingTextField.h
//  Pods
//
//  Created by Nettium on 04/12/2016.
//
//

#import <UIKit/UIKit.h>

 @interface  ACFloatingTextField : UITextField
{
    UIView *bottomLineView;
}

@property (nonatomic,strong) UIColor *lineColor;
@property (nonatomic,strong) UIColor *placeHolderColor;
@property (nonatomic,strong) UIColor *selectedPlaceHolderColor;
@property (nonatomic,strong) UIColor *selectedLineColor;

@property (nonatomic,strong) UILabel *labelPlaceholder;

@property (assign) BOOL disableFloatingLabel;

-(instancetype)init;
-(instancetype)initWithFrame:(CGRect)frame;

-(void)setTextFieldPlaceholderText:(NSString *)placeholderText;
-(void)upadteTextField:(CGRect)frame;

@end
